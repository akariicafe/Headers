@class NSUUID, NSDictionary, NSData, NSDate, WOSyncIdentity, NSString;

@interface WOPersistence : NSObject <NSSecureCoding, HDSyncCodable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long version;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSDictionary *keyedNumbers;
@property (copy, nonatomic) NSDictionary *keyedStrings;
@property (copy, nonatomic) NSDictionary *keyedDates;
@property (copy, nonatomic) NSDictionary *keyedDatas;
@property (copy, nonatomic) NSData *persistedData;
@property (copy, nonatomic) NSData *persistedProtoData;
@property (nonatomic) unsigned long long objectState;
@property (copy, nonatomic) NSDate *objectModificationDate;
@property (copy, nonatomic) WOSyncIdentity *syncIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistenceFromProto:(id)a0;
+ (id)zeroObjectModificationDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)data;
- (id)protobuf;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)encodedByteCount;
- (id)initWithVersion:(long long)a0 type:(unsigned long long)a1 uuid:(id)a2 persistedData:(id)a3 objectState:(unsigned long long)a4 objectModificationDate:(id)a5 syncIdentity:(id)a6;
- (id)initWithVersion:(long long)a0 type:(unsigned long long)a1 uuid:(id)a2 persistedData:(id)a3 persistedProtoData:(id)a4 objectState:(unsigned long long)a5 objectModificationDate:(id)a6 syncIdentity:(id)a7;

@end
