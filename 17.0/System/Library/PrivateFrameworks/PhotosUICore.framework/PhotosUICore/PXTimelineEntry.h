@class NSString, PXTimelineCrop, NSDate, NSURL;

@interface PXTimelineEntry : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) double relevanceScore;
@property (retain, nonatomic) PXTimelineCrop *suggestedCrop;
@property (nonatomic) unsigned long long rejectReason;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, nonatomic) NSURL *deeplink;
@property (retain, nonatomic) NSString *proactiveCriterion;

+ (id)fallbackEntryForContentType:(unsigned long long)a0 size:(unsigned long long)a1;
+ (id)fallbackEntryForContentType:(unsigned long long)a0 sourceIdentifier:(id)a1 size:(unsigned long long)a2;
+ (id)descriptionForTimelineContentType:(unsigned long long)a0;
+ (id)descriptionForRejectReason:(unsigned long long)a0;
+ (id)emptyWidgetURLForContentType:(unsigned long long)a0 sourceIdentifier:(id)a1;
+ (id)fallbackEntryForAlbumNotFoundWithLocalIdentifier:(id)a0 size:(unsigned long long)a1;
+ (id)placeholderEntryForContentType:(unsigned long long)a0;

- (unsigned long long)hash;
- (id)initWithFeaturedPhoto:(id)a0 andFeaturedPhotoKeyAsset:(id)a1;
- (id)initWithFeaturedPhoto:(id)a0 andFeaturedPhotoKeyAsset:(id)a1 suggestedCrop:(id)a2;
- (id)description;
- (id)initWithMemory:(id)a0 andMemoryKeyAsset:(id)a1;
- (void).cxx_destruct;
- (id)initWithAlbumFeaturedPhoto:(id)a0 localAlbumIdentifier:(id)a1 andFeaturedPhotoKeyAsset:(id)a2 suggestedCrop:(id)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 localIdentifier:(id)a2 assetLocalIdentifier:(id)a3 deeplink:(id)a4 contentType:(unsigned long long)a5 sourceIdentifier:(id)a6 relevanceScore:(double)a7 proactiveCriterion:(id)a8 suggestedCrop:(id)a9 rejectReason:(unsigned long long)a10;
- (id)dictionaryRepresentation;
- (id)_localTimeFormatter;
- (BOOL)isEqual:(id)a0;
- (id)_initWithTimelineEntry:(id)a0;
- (id)_utcTimeFormatter;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
