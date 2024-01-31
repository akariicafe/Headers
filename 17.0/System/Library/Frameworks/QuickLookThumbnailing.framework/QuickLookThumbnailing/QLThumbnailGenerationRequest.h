@class NSURL, NSError, NSFileHandle, NSDate, NSDictionary, QLCacheFileProviderVersionedFileIdentifier, UTType, QLThumbnailRepresentation, NSString, FPSandboxingURLWrapper, QLCacheBasicVersionedFileIdentifier, NSData, FPItem, NSUUID;

@interface QLThumbnailGenerationRequest : NSObject <NSCopying, NSSecureCoding> {
    UTType *_contentType;
    NSString *_contentTypeUTI;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (readonly, nonatomic) long long mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *parentDirectorySandboxWrapper;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) FPItem *item;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *contentTypeUTI;
@property (retain, nonatomic) QLCacheBasicVersionedFileIdentifier *basicFileIdentifier;
@property (retain, nonatomic) QLCacheFileProviderVersionedFileIdentifier *fileProviderFileIdentifier;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) long long iconVariant;
@property (nonatomic) BOOL wantsBaseline;
@property (nonatomic) long long generationBehavior;
@property (nonatomic) int interpolationQuality;
@property (retain, nonatomic) NSError *requestIsInvalidError;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long representationTypes;
@property (retain, nonatomic) NSDictionary *externalThumbnailGeneratorData;
@property (nonatomic) unsigned long long externalThumbnailGeneratorDataHash;
@property (nonatomic) BOOL shouldUseRestrictedExtension;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ statusBlock;
@property (retain, nonatomic) FPSandboxingURLWrapper *saveURLSandboxWrapper;
@property (retain, nonatomic) NSFileHandle *saveFileHandle;
@property (nonatomic, getter=isDownloadingAllowed) BOOL downloadingAllowed;
@property (copy, nonatomic) NSString *saveURLContentType;
@property (nonatomic) unsigned long long typesForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) UTType *overriddenContentType;
@property (retain, nonatomic) NSString *overriddenContentTypeIdentifier;
@property (nonatomic) BOOL thirdPartyVideoDecodersAllowed;
@property (copy, nonatomic) UTType *contentType;
@property (nonatomic) double minimumDimension;
@property (nonatomic) BOOL iconMode;

+ (id)_basicFileIdentifierForURL:(id)a0 error:(id *)a1;
+ (id)_fileProviderFileIdentifierForFPItem:(id)a0;
+ (id)customExtensionCommunicationEncodedClasses;
+ (id)requestWithThumbnailRequest:(id)a0;

- (unsigned long long)hash;
- (void)finish;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isUbiquitous;
- (id)_stateDescription;
- (id)fileIdentifier;
- (id)initWithFileAtURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 representationTypes:(unsigned long long)a3;
- (long long)requestedMostRepresentativeType;
- (BOOL)forceGeneration;
- (id)saveURL;
- (id)copyWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)equivalentFPItemRequestWithItem:(id)a0 representationTypes:(unsigned long long)a1;
- (id)initWithData:(id)a0 contentType:(id)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 representationTypes:(unsigned long long)a4;
- (id)initWithFPItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 representationTypes:(unsigned long long)a3;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 representationTypes:(unsigned long long)a2;
- (BOOL)isDataBased;
- (BOOL)isFileBased;
- (void)markDidBegin;
- (float)maximumPixelSize;
- (void)noteUpdateBlockHasBeenCalledForType:(long long)a0;
- (BOOL)prepareForSending;
- (BOOL)provideCachedResultsOnly;
- (BOOL)provideFullResolutionThumbnail;
- (BOOL)provideGenericIcon;
- (BOOL)provideLowQualityThumbnail;
- (BOOL)resultShouldBeSavedToDisk;
- (void)setSaveURL:(id)a0;
- (BOOL)thumbnailRepresentationTypeMatchesRequestedMostRepresentativeType:(long long)a0;

@end
