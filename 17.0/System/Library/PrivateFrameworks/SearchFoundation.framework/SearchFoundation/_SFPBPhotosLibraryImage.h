@class NSString, NSArray, NSData;

@interface _SFPBPhotosLibraryImage : PBCodable <_SFPBPhotosLibraryImage, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *photoIdentifier;
@property (nonatomic) BOOL isSyndicated;
@property (copy, nonatomic) NSArray *peopleInPhotos;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
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
- (void)setPeopleInPhoto:(id)a0;
- (void)addPeopleInPhoto:(id)a0;
- (void)clearPeopleInPhoto;
- (id)peopleInPhotoAtIndex:(unsigned long long)a0;
- (unsigned long long)peopleInPhotoCount;

@end
