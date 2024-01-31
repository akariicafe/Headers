@class NSSet, NSError;

@interface FCFetchOperationResult : NSObject

@property (copy, nonatomic) NSSet *missingObjectDescriptions;
@property (readonly, nonatomic) id fetchedObject;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned long long fetchResult;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL anyMissingObjects;

+ (id)resultWithStatus:(unsigned long long)a0 fetchedObject:(id)a1 error:(id)a2;

- (void).cxx_destruct;
- (id)initWithStatus:(unsigned long long)a0 fetchedObject:(id)a1 fetchResult:(unsigned long long)a2 error:(id)a3;

@end
