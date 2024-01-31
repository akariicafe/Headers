@class NSString;

@interface PLFileManagerAllocatedSizeRemoveDelegate : NSObject <NSFileManagerDelegate>

@property (readonly) long long totalFileAllocatedSize;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fileManager:(id)a0 shouldRemoveItemAtURL:(id)a1;

@end
