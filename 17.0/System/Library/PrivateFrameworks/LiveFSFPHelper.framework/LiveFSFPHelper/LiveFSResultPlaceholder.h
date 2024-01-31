@class NSString, NSNumber, NSDictionary;

@interface LiveFSResultPlaceholder : NSObject

@property (retain) NSString *path;
@property (retain) NSString *filename;
@property (retain) NSNumber *modTime;
@property (retain) NSDictionary *xattrs;

- (void).cxx_destruct;

@end
