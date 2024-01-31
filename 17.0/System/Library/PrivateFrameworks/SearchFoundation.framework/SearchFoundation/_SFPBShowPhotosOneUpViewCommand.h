@class NSArray, _SFPBPerson, NSData, _SFPBPunchout, _SFPBPhotosLibraryImage, NSString;

@interface _SFPBShowPhotosOneUpViewCommand : PBCodable <_SFPBShowPhotosOneUpViewCommand, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBPhotosLibraryImage *photosLibraryImage;
@property (retain, nonatomic) _SFPBPerson *matchedPerson;
@property (copy, nonatomic) NSArray *matchedScenes;
@property (copy, nonatomic) NSArray *matchedPeoples;
@property (retain, nonatomic) _SFPBPunchout *photoFilePunchout;
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
- (void)addMatchedPeople:(id)a0;
- (void)addMatchedScenes:(id)a0;
- (void)clearMatchedPeople;
- (void)clearMatchedScenes;
- (id)matchedPeopleAtIndex:(unsigned long long)a0;
- (unsigned long long)matchedPeopleCount;
- (id)matchedScenesAtIndex:(unsigned long long)a0;
- (unsigned long long)matchedScenesCount;
- (void)setMatchedPeople:(id)a0;

@end
