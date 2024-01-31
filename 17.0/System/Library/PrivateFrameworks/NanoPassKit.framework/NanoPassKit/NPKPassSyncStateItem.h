@class NSString, NSDictionary, NSData, NSNumber;

@interface NPKPassSyncStateItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSNumber *sequenceCounter;
@property (retain, nonatomic) NSData *manifestHash;
@property (retain, nonatomic) NSDictionary *manifest;

- (unsigned long long)hash;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPass:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 serialNumber:(id)a1 sequenceCounter:(id)a2 manifestHash:(id)a3 manifest:(id)a4;
- (id)initWithProtoSyncStateItem:(id)a0;
- (BOOL)isEqualToPassSyncStateItem:(id)a0;
- (id)protoSyncStateItem;

@end
