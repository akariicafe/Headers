@class NSString, NSDictionary, NSData, NSNumber;

@interface PKAccessoryDevice : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *endpointUUID;
@property (retain, nonatomic) NSData *primaryColorData;
@property (retain, nonatomic) NSData *secondaryColorData;
@property (retain, nonatomic) NSNumber *type;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic, getter=isSleeve) BOOL sleeve;
@property (readonly, nonatomic) BOOL isMock;

+ (id)mockAccessoryDevice;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessoryTypeString;
- (id)initWithDictionary:(id)a0 endpointUUID:(id)a1;

@end
