@class NSNumber, NSSet;

@interface CKVDeviceContextualItemData : NSObject

@property (readonly, nonatomic) BOOL localDevice;
@property (readonly, nonatomic) NSNumber *contentIdentifier;
@property (readonly, nonatomic) NSSet *metaContentIdentities;
@property (readonly, nonatomic) NSSet *timestamps;

- (void).cxx_destruct;
- (id)initWithMetaContentIdentities:(id)a0 timestamps:(id)a1 contentIdentifier:(id)a2 localDevice:(BOOL)a3;

@end
