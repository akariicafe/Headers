@class NSDictionary, NSMapTable, FBKBugForm;

@interface FBKQuestionDependencyGraph : NSObject

@property (retain) FBKBugForm *bugForm;
@property (retain) NSMapTable *tatToQuestionMap;
@property (retain) NSDictionary *nodes;

- (void).cxx_destruct;
- (id)dependencyNodeForQuestion:(id)a0;
- (id)initWithBugForm:(id)a0;
- (id)questionsDependentOnQuestion:(id)a0;
- (BOOL)visibilityForQuestion:(id)a0 inFormResponse:(id)a1;

@end
