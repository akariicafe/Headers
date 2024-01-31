@class NSString;
@protocol ECMessage;

@interface ECTransferMessageActionItem : NSObject <ECTransferMessageActionItemBuilder, NSCopying>

@property (copy, nonatomic) NSString *sourceRemoteID;
@property (retain, nonatomic) id<ECMessage> sourceMessage;
@property (retain, nonatomic) id<ECMessage> destinationMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
