@class NSArray, NSString, INDateComponentsRange;

@interface INMediaSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *activityNames;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, copy, nonatomic) NSString *mediaName;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) NSArray *genreNames;
@property (readonly, copy, nonatomic) NSArray *moodNames;
@property (readonly, copy, nonatomic) INDateComponentsRange *releaseDate;
@property (readonly, nonatomic) long long reference;
@property (readonly, copy, nonatomic) NSString *mediaIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaType:(long long)a0 sortOrder:(long long)a1 mediaName:(id)a2 artistName:(id)a3 albumName:(id)a4 genreNames:(id)a5 moodNames:(id)a6 releaseDate:(id)a7 reference:(long long)a8 mediaIdentifier:(id)a9;

@end
