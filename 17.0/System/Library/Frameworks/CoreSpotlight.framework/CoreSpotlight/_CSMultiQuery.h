@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface _CSMultiQuery : NSObject {
    BOOL _started;
}

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id completionHandler;
@property (nonatomic) BOOL simple;
@property (retain, nonatomic) NSMutableArray *simpleQueryTokens;
@property (retain, nonatomic) NSArray *queries;
@property (retain, nonatomic) NSMutableArray *results;

+ (void)initialize;
+ (id)countingQueryForEmailsArrays:(id)a0 scope:(unsigned long long)a1 context:(id)a2 contextualFilterQueries:(id)a3 includeSecondaryRecipients:(BOOL)a4 completionHandler:(id /* block */)a5;
+ (id)countingQueryWithPeopleSuggestions:(id)a0 filterQuery:(id)a1 context:(id)a2 completionHandler:(id /* block */)a3;
+ (id)countingQueryWithStrings:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
+ (id)countingQueryWithStrings:(id)a0 contexts:(id)a1 completionHandler:(id /* block */)a2;
+ (id)countingQueryWithSuggestions:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;

- (void)start;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQueries:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSimpleQueries:(id)a0 completionHandler:(id /* block */)a1;
- (void)startSimpleQueryAtIndex:(unsigned long long)a0;

@end
