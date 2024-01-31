@class NSString, NSProgress, NSURL, SUUIResourceLoader, NSData, NSMutableArray;

@interface SUUIArtworkItemProvider : NSItemProvider <SUUIArtworkRequestDelegate>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) SUUIResourceLoader *resourceLoader;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
