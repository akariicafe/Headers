@class NSString;
@protocol HMApplicationData, HFApplicationData;

@interface HFReorderableItemListAbstractBase : NSObject

@property (readonly, weak, nonatomic) id<HMApplicationData, HFApplicationData> applicationDataContainer;
@property (readonly, nonatomic) NSString *category;
@property (readonly) BOOL isEmpty;

- (id)init;
- (void)setSortedItems:(id)a0;
- (void).cxx_destruct;
- (id)saveWithSender:(id)a0;
- (id)initWithApplicationDataContainer:(id)a0 category:(id)a1;

@end
