@class NSURL;

@interface KGErrorMarker : NSObject {
    NSURL *_fileURL;
}

- (id)initWithDatabaseURL:(id)a0;
- (void).cxx_destruct;
- (void)createWithComment:(id)a0;
- (BOOL)markerExists;
- (id)readComment;
- (void)removeMarker;

@end
