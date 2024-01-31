@class NSString, NSURL, NSDate, NSNumber, PLUniformTypeIdentifier;

@interface PLValidatedExternalResource : NSObject <PLResourceIdentity, NSCopying>

@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) long long dataLength;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (retain, nonatomic) NSString *codecFourCharCode;
@property (nonatomic) short trashedState;
@property (retain, nonatomic) NSDate *trashedDate;
@property (nonatomic) long long ptpTrashedState;
@property (retain, nonatomic) NSNumber *sidecarIndex;
@property (readonly, nonatomic) BOOL isDerivative;
@property (readonly, nonatomic) BOOL hasRecipe;
@property (readonly, nonatomic) BOOL isOriginalResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceWithExternalResource:(id)a0;

- (id)init;
- (BOOL)isPlayableVideo;
- (void)setTrashedStateFromURL;
- (void).cxx_destruct;
- (BOOL)isEqualToValidatedExternalResource:(id)a0;
- (unsigned long long)cplTypeWithAssetID:(id)a0;
- (void)persistResourceTypeToFileURL;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
