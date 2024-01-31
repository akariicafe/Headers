@class NSString;

@interface VMUIOSurfaceDebugDescription : NSObject

@property (readonly) unsigned long long virtualAddress;
@property (readonly) unsigned long long allocationSize;
@property (readonly) unsigned int surfaceID;
@property (readonly) unsigned int pixelFormat;
@property (readonly) NSString *pixelFormatString;
@property (readonly) unsigned int width;
@property (readonly) unsigned int height;
@property (readonly) unsigned long long dirtySize;
@property (readonly) unsigned long long residentSize;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)initWithVirtualAddress:(unsigned long long)a0 allocationSize:(unsigned long long)a1 surfaceID:(unsigned int)a2 pixelFormat:(unsigned int)a3 pixelFormatString:(id)a4 width:(unsigned int)a5 height:(unsigned int)a6 dirtySize:(unsigned long long)a7 residentSize:(unsigned long long)a8 name:(id)a9;

@end
