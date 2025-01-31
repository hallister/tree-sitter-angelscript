// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterAngelScript",
    products: [
        .library(name: "TreeSitterAngelScript", targets: ["TreeSitterAngelScript"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterAngelScript",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterAngelScriptTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterAngelScript",
            ],
            path: "bindings/swift/TreeSitterAngelScriptTests"
        )
    ],
    cLanguageStandard: .c11
)
