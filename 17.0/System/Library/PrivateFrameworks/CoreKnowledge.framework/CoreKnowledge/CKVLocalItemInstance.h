@class NSNumber;
@protocol CKVUnifiedMetaContentDataType, CKVUnifiedContentDataType;

@interface CKVLocalItemInstance : CKVSharedItem

@property (readonly, nonatomic) NSNumber *instanceIdentifier;
@property (readonly, nonatomic) id<CKVUnifiedMetaContentDataType, CKVUnifiedContentDataType> item;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContentHash:(id)a0 instanceHash:(id)a1 instance:(id)a2;

@end
