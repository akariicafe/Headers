@class NSArray, NSDictionary;

@interface _EDPartitionedObjectIDs : NSObject

@property (readonly, copy, nonatomic) NSArray *messageObjectIDs;
@property (readonly, copy, nonatomic) NSDictionary *threadObjectIDsByScope;

- (void).cxx_destruct;
- (id)initWithMessageObjectIDs:(id)a0 threadObjectIDsByScope:(id)a1;

@end
