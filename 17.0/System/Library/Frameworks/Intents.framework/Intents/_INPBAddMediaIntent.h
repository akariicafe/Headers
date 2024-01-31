@class _INPBMediaDestination, NSArray, NSString, _INPBMediaSearch, _INPBIntentMetadata, _INPBPrivateAddMediaIntentData;

@interface _INPBAddMediaIntent : PBCodable <_INPBAddMediaIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBMediaDestination *mediaDestination;
@property (readonly, nonatomic) BOOL hasMediaDestination;
@property (copy, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (retain, nonatomic) _INPBPrivateAddMediaIntentData *privateAddMediaIntentData;
@property (readonly, nonatomic) BOOL hasPrivateAddMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)mediaItemsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearMediaItems;
- (void)addMediaItems:(id)a0;
- (id)mediaItemsAtIndex:(unsigned long long)a0;

@end
