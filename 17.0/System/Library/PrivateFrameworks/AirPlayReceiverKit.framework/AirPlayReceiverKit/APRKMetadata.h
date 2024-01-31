@class NSString;

@interface APRKMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *album;
@property (readonly, copy, nonatomic) NSString *artist;
@property (readonly, copy, nonatomic) NSString *artworkDataInBase64;
@property (readonly, copy, nonatomic) NSString *artworkMIMEType;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long totalTrackCount;
@property (readonly, nonatomic) long long trackNumber;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)updateMedatataWithDictionary:(id)a0;

@end
