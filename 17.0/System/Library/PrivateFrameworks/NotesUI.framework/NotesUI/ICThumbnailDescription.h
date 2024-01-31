@class NSSet, ICThumbnailConfiguration, NSError, NSDate, UIImage;

@interface ICThumbnailDescription : NSObject

@property (readonly, nonatomic) ICThumbnailConfiguration *configuration;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isCached) BOOL cached;
@property (nonatomic) double fetchDuration;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (readonly, nonatomic) long long preferredContentMode;
@property (nonatomic) long long thumbnailDecorationType;
@property (retain, nonatomic) NSSet *associatedObjectIdentifiers;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
