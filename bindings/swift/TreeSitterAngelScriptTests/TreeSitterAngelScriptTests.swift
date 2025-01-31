import XCTest
import SwiftTreeSitter
import TreeSitterAngelScript

final class TreeSitterAngelScriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_angelscript())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading AngelScript grammar")
    }
}
