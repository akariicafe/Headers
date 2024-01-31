@class NSArray;

@interface SRUIFConversationTransaction : NSObject

@property (readonly, nonatomic) NSArray *updatedItemIndexPaths;
@property (readonly, nonatomic) NSArray *insertedItemIndexPaths;
@property (readonly, nonatomic) NSArray *presentationStateChangedItemIndexPaths;

- (void).cxx_destruct;
- (id)initWithUpdatedItemIndexPaths:(id)a0 insertedItemIndexPaths:(id)a1 presentationStateChangedItemIndexPaths:(id)a2;

@end
