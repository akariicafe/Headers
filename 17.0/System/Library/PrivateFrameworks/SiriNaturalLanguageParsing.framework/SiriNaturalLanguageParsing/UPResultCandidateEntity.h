@class NSString, SIRINLUEXTERNALUsoGraph, UPResultLeafNode, NSNumber;

@interface UPResultCandidateEntity : NSObject

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) NSString *label;
@property (readonly) NSString *text;
@property (readonly) NSNumber *groupId;
@property (readonly) NSString *semanticValue;
@property (readonly) SIRINLUEXTERNALUsoGraph *sharedEntityGraph;
@property (readonly) UPResultLeafNode *leafNodeRepresentation;
@property (readonly) BOOL isHigherLevelEntity;
@property (readonly) NSString *higherLevelParentLabel;
@property (readonly) NSString *higherLevelChildLabel;

- (void).cxx_destruct;
- (id)_indexedLabelRepresentation;
- (id)annotatedEntityFragmentString;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 label:(id)a1 text:(id)a2 groupId:(id)a3 semanticValue:(id)a4 sharedEntityGraph:(id)a5;

@end
