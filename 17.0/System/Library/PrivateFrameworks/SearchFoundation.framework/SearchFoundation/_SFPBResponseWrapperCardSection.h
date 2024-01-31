@class NSArray, NSString, NSData, _SFPBCATModel, _SFPBPatternModel;

@interface _SFPBResponseWrapperCardSection : PBCodable <_SFPBResponseWrapperCardSection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBCATModel *catModel;
@property (copy, nonatomic) NSData *visualCATOutput;
@property (retain, nonatomic) _SFPBPatternModel *pattern_model;
@property (copy, nonatomic) NSArray *pattern_models;
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
- (void)addPattern_models:(id)a0;
- (void)clearPattern_models;
- (id)pattern_modelsAtIndex:(unsigned long long)a0;
- (unsigned long long)pattern_modelsCount;

@end
