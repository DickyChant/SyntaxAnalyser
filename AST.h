#pragma once

enum ASTNodeType {
	ASTNode_LBRACKET,
	ASTNode_RBRACKET,
	ASTNode_LPARENTHESIS,
	ASTNode_RPARENTHESIS,
	ASTNode_LBRACE,
	ASTNode_RBRACE,
	ASTNode_POS_OR_ADD,
	ASTNode_NEG_OR_SUB,
	ASTNode_DEREF_MUL,
	ASTNode_ADDRESS_BIT_AND,
	ASTNode_PLUS_PLUS,
	ASTNode_MINUS_MINUS,
	ASTNode_NOT,
	ASTNode_BIT_REVERSE,
	ASTNode_DIV,
	ASTNode_MOD,
	ASTNode_LSHIFT,
	ASTNode_RSHIFT,
	ASTNode_BIT_XOR,
	ASTNode_BIT_OR,
	ASTNode_ASSIGN,
	ASTNode_DIV_ASSIGN,
	ASTNode_MUL_ASSIGN,
	ASTNode_MOD_ASSIGN,
	ASTNode_ADD_ASSIGN,
	ASTNode_SUB_ASSIGN,
	ASTNode_LSHIFT_ASSIGN,
	ASTNode_RSHIFT_ASSIGN,
	ASTNode_BIT_AND_ASSIGN,
	ASTNode_BIT_XOR_ASSIGN,
	ASTNode_BIT_OR_ASSIGN,
	ASTNode_GREATER_THAN,
	ASTNode_GREATER_EQUAL,
	ASTNode_LESS_THAN,
	ASTNode_LESS_EQUAL,
	ASTNode_EQUAL,
	ASTNode_NOT_EQUAL,
	ASTNode_OR,
	ASTNode_AND,
	ASTNode_DOT,
	ASTNode_ARROW,
	ASTNode_QUESTION_MARK,
	ASTNode_COMMA,
	ASTNode_COLON,
	ASTNode_SEMICOLON,
	ASTNode_KEYWORD_AUTO,
	ASTNode_KEYWORD_BREAK,
	ASTNode_KEYWORD_CASE,
	ASTNode_KEYWORD_CHAR,
	ASTNode_KEYWORD_CONST,
	ASTNode_KEYWORD_CONTINUE,
	ASTNode_KEYWORD_DEFAULT,
	ASTNode_KEYWORD_DO,
	ASTNode_KEYWORD_DOUBLE,
	ASTNode_KEYWORD_ELSE,
	ASTNode_KEYWORD_ENUM,
	ASTNode_KEYWORD_EXTERN,
	ASTNode_KEYWORD_FLOAT,
	ASTNode_KEYWORD_FOR,
	ASTNode_KEYWORD_GOTO,
	ASTNode_KEYWORD_IF,
	ASTNode_KEYWORD_INT,
	ASTNode_KEYWORD_LONG,
	ASTNode_KEYWORD_REGISTER,
	ASTNode_KEYWORD_RETURN,
	ASTNode_KEYWORD_SHORT,
	ASTNode_KEYWORD_SIGNED,
	ASTNode_KEYWORD_SIZEOF,
	ASTNode_KEYWORD_STATIC,
	ASTNode_KEYWORD_STRUCT,
	ASTNode_KEYWORD_SWITCH,
	ASTNode_KEYWORD_TYPEDEF,
	ASTNode_KEYWORD_UNION,
	ASTNode_KEYWORD_UNSIGNED,
	ASTNode_KEYWORD_VOID,
	ASTNode_KEYWORD_VOLATILE,
	ASTNode_KEYWORD_WHILE,
	ASTNode_KEYWORD_INCLUDE,
	ASTNode_KEYWORD_DEFINE,
	ASTNode_INTEGER_CONSTANT,
	ASTNode_DOUBLE_CONSTANT,
	ASTNode_FLOAT_CONSTANT,
	ASTNode_LONG_CONSTANT,
	ASTNode_CHARACTER_CONSTANT, 
	ASTNode_LITERAL_CONSTANT, 
	ASTNode_IDENTIFIER,

	ASTNode_PROGRAM,
	ASTNode_FUNCTION_DEFINITION, 
	ASTNode_PARAMETER, 
	ASTNode_ONE_OR_MORE_PARAMETER,
	ASTNode_EXPRESSION,
	ASTNode_ASSIGNMENT_EXPRESSION,
	ASTNode_CONSTANT_EXPRESSION,
	ASTNode_CONDITIONAL_EXPRESSION,
	ASTNode_OR_EXPRESSION,
	ASTNode_AND_EXPRESSION,
	ASTNode_BIT_OR_EXPRESSION,
	ASTNode_BIT_XOR_EXPRESSION,
	ASTNode_BIT_AND_EXPRESSION,
	ASTNode_EQUALITY_EXPRESSION,
	ASTNode_RELATIONAL_EXPRESSION,
	ASTNode_SHIFT_EXPRESSION,
	ASTNode_ADDITIVE_EXPRESSION,
	ASTNode_MULTIPLICATIVE_EXPRESSION,
	ASTNode_CAST_EXPRESSION,
	ASTNode_UNARY_EXPRESSION,
	ASTNode_POSTFIX_EXPRESSION,
	ASTNode_PRIMARY_EXPRESSION,
	ASTNode_CONSTANT,
	ASTNode_ONE_OR_MORE_ARGUMENT_EXPRESSION,
	ASTNode_DECLARATION_OR_STATEMENT,
	ASTNode_ONE_OR_MORE_DECLARATION_OR_STATEMENT,
	ASTNode_DECLARATION_SPECIFIER,
	ASTNode_ONE_OR_MORE_DECLARATION_SPECIFIER,
	ASTNode_DECLARATION, 
	ASTNode_DECLARATION_STATEMENT, 
	ASTNode_ONE_OR_MORE_DECLARATION_STATEMENT, 
	ASTNode_ONE_OR_MORE_INIT_DECLARATOR,
	ASTNode_INIT_DECLARATOR,
	ASTNode_DECLARATOR,
	ASTNode_DIRECT_DECLARATOR,
	ASTNode_POINTER,
	ASTNode_ONE_OR_MORE_INITIALIZER,
	ASTNode_INITIALIZER,
	ASTNode_COMPOUND_STATEMENT,
	ASTNode_STATEMENT,
	ASTNode_LABELED_STATEMENT,
	ASTNode_CASE_STATEMENT, 
	ASTNode_DEFAULT_STATEMENT, 
	ASTNode_EXPRESSION_STATEMENT,
	ASTNode_SELECTION_STATEMENT,
	ASTNode_IF_STATEMENT,
	ASTNode_SWITCH_STATEMENT,
	ASTNode_ITERATION_STATEMENT,
	ASTNode_WHILE_STATEMENT,
	ASTNode_DO_WHILE_STATEMENT,
	ASTNode_FOR_STATEMENT,
	ASTNode_JUMP_STATEMENT,
	ASTNode_GOTO_STATEMENT,
	ASTNode_CONTINUE_STATEMENT,
	ASTNode_BREAK_STATEMENT,
	ASTNode_RETURN_STATEMENT,
	ASTNode_ASSIGNMENT_OPERATOR,
	ASTNode_UNARY_OPERATOR,
	ASTNode_TYPE_SPECIFIER,
	ASTNode_STORAGE_CLASS_SPECIFIER,
	ASTNode_TYPE_QUALIFIER,
	ASTNode_ONE_OR_MORE_TYPE_QUALIFIER,
	ASTNode_SPECIFIER_QUALIFIER,
	ASTNode_ONE_OR_MORE_SPECIFIER_QUALIFIER,
	ASTNode_ONE_OR_MORE_IDENTIFIER, 
	ASTNode_TYPE_NAME,
	ASTNode_STRUCT_OR_UNION, 
	ASTNode_STRUCT_OR_UNION_SPECIFIER, 
	ASTNode_ONE_OR_MORE_STRUCT_DECLARATION,
	ASTNode_STRUCT_DECLARATION,
	ASTNode_ONE_OR_MORE_STRUCT_DECLARATOR,
	ASTNode_STRUCT_DECLARATOR
};

#define MAX_SUBNODE 12

struct ASTNode {
	enum ASTNodeType type;
	int way;
	int numOfSubNode;
	int subNode[MAX_SUBNODE];
	char *content;
	
};

struct AST {
	struct ASTNode *head;
	int size;
	int capacity;
};