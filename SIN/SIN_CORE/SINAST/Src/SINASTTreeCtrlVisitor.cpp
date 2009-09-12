#include "SINASTTreeCtrlVisitor.h"
#if 0
#include <stdio.h>
#include <iostream>

#include "Common.h"
#include "SINLogger.h"
#include "SINAssert.h"
#include "SINTreeNode.h"
#include "SINConstants.h"
#include "SINLoggerManager.h"
/*
#define SIN_ASTTreeCtrlVisitor_LoggerName "SIN::ASTTreeCtrlVisitor"

#define SIN_ASTTreeCtrlVisitor_IdentationSequence "    "

#define SIN_AST_TREE_CTRL_DEFAULT_VISIT_DEFINITION(NODENAME)		\
	void ASTTreeCtrlVisitor::Visit(NODENAME##ASTNode & _node) {		\
		Visit(static_cast<ASTNode &>(_node));						\
	}
*/
namespace SIN {

	ASTTreeCtrlVisitor::ASTTreeCtrlVisitor(OutputStream& _out):
		ASTTreeVisualisationVisitor(_out),
		firstVisit(true)
	{}

	ASTTreeCtrlVisitor::~ASTTreeCtrlVisitor(void) {
	}

	void ASTTreeCtrlVisitor::Visit(ASTNode &node) {
		if (node.Name() == "AST" && firstVisit) {
			out				<< 
			"RootId: "		<<
			node.ID()		<<
			" parentId: "	<< 
			node.ID();
			firstVisit = false;
		}
		
		else
			out				<< 
			"id: "			<< 
			node.ID()		<< 
			" parentId: "	<<  
			static_cast<ASTNode *>(node.GetParent())->ID();

		out << " line: " << node.AssociatedFileLine() << " expression: \"" << node.Name() << "\"" << SIN::ENDL;
	}

	

} // namespace SIN
#endif