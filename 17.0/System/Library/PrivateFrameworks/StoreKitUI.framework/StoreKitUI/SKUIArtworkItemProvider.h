@class NSString, NSProgress, NSURL, SKUIResourceLoader, NSData, NSMutableArray;

@interface SKUIArtworkItemProvider : NSItemProvider <SKUIArtworkRequestDelegate>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
