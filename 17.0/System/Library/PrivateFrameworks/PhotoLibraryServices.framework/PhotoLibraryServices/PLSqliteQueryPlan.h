@class NSString, NSMutableArray, NSRegularExpression;

@interface PLSqliteQueryPlan : NSObject {
    NSMutableArray *_nodes;
    NSRegularExpression *_stringRepresentationRegex;
}

@property (readonly, copy) NSString *graphDescription;
@property (readonly, copy) NSString *listDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_renderLevelWithParentIdentifier:(int)a0 prefix:(id)a1 intoLines:(id)a2;
- (id)_stringRepresentationRegex;
- (void)addNodeWithIdentifier:(int)a0 parentIdentifier:(int)a1 unused:(int)a2 nodeDescription:(id)a3;
- (void)addNodeWithStringRepresentation:(id)a0;

@end
