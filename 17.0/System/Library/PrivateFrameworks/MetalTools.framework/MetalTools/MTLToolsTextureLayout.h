@class NSString;

@interface MTLToolsTextureLayout : MTLToolsObject <MTLTextureLayout>

@property (readonly) unsigned long long size;
@property (readonly) unsigned long long alignment;
@property (readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } copyGranularity;
@property (readonly) struct { unsigned long long x0[2]; } watermark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
