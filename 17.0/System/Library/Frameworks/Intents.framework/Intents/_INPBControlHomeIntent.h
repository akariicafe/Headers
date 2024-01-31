@class NSArray, _INPBDateTimeRange, NSString, _INPBIntentMetadata, _INPBHomeUserTask;

@interface _INPBControlHomeIntent : PBCodable <_INPBControlHomeIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *contents;
@property (readonly, nonatomic) unsigned long long contentsCount;
@property (copy, nonatomic) NSArray *filters;
@property (readonly, nonatomic) unsigned long long filtersCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBDateTimeRange *time;
@property (readonly, nonatomic) BOOL hasTime;
@property (retain, nonatomic) _INPBHomeUserTask *userTask;
@property (readonly, nonatomic) BOOL hasUserTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contentsType;
+ (Class)filtersType;

- (id)filtersAtIndex:(unsigned long long)a0;
- (void)addFilters:(id)a0;
- (void)clearContents;
- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)clearFilters;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addContents:(id)a0;
- (id)contentsAtIndex:(unsigned long long)a0;

@end
