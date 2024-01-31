@class NSString, NSData;

@interface _SFPBPatternModel : PBCodable <_SFPBPatternModel, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *pattern_id;
@property (copy, nonatomic) NSData *pattern_parameters;
@property (copy, nonatomic) NSString *pattern_bundle_id;
@property (copy, nonatomic) NSString *pattern_template_directory;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;

@end
