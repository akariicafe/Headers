@class NSString, NSDictionary, NSData, ICDocCamImageQuad;
@protocol DCScanDataDelegate, ICDocCamViewControllerDelegate;

@interface ICDocCamDocumentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) id<ICDocCamViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<DCScanDataDelegate> scanDataDelegate;
@property (retain, nonatomic) NSDictionary *metaData;
@property (retain, nonatomic) ICDocCamImageQuad *imageQuad;
@property (retain, nonatomic) NSString *croppedAndFilteredImageUUID;
@property (retain, nonatomic) NSString *croppedButNotFilteredImageUUID;
@property (retain, nonatomic) NSString *fullImageUUID;
@property (retain, nonatomic) NSString *meshAnimImageUUID;
@property (nonatomic) short currentFilter;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) NSString *scanDataDelegateIdentifier;
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) NSData *markupModelData;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allUUIDs;

@end
