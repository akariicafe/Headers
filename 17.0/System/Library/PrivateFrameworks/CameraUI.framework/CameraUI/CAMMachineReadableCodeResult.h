@class AVMetadataMachineReadableCodeObject, NSString, AVMetadataObject;

@interface CAMMachineReadableCodeResult : NSObject <CAMMetadataObjectResult>

@property (readonly, nonatomic) AVMetadataMachineReadableCodeObject *underlyingMachineReadableCodeObject;
@property (readonly, nonatomic) NSString *symbolString;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, nonatomic) unsigned long long syntheticFocusMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)mrcType;
- (id)initWithMachineReadableCodeObject:(id)a0;
- (BOOL)isOfSignificantSize;

@end
