@class NSString, NSURLResponse, UIImage, NSData, NSURL, NSError;

@interface WBSTouchIconFetchOperationResult : NSObject

@property (readonly, nonatomic) UIImage *touchIcon;
@property (readonly, nonatomic) NSData *iconData;
@property (readonly, nonatomic) NSURL *iconURL;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, nonatomic, getter=isFavicon) BOOL favicon;
@property (readonly, nonatomic) BOOL pageRequestDidSucceed;
@property (readonly, nonatomic) BOOL higherPriorityIconDownloadFailedDueToNetworkError;
@property (readonly, nonatomic) BOOL failedDueToUnrecoverableNetworkError;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) NSError *error;

+ (id)resultForFetchFailureWithHost:(id)a0 pageRequestDidSucceed:(BOOL)a1 response:(id)a2 error:(id)a3;
+ (id)resultWithFavicon:(id)a0 iconData:(id)a1 iconURL:(id)a2 host:(id)a3 pageRequestDidSucceed:(BOOL)a4 response:(id)a5 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a6;
+ (id)resultWithTouchIcon:(id)a0 host:(id)a1 isFavicon:(BOOL)a2 pageRequestDidSucceed:(BOOL)a3 response:(id)a4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a5;

- (void).cxx_destruct;
- (id)initWithTouchIcon:(id)a0 iconData:(id)a1 iconURL:(id)a2 host:(id)a3 isFavicon:(BOOL)a4 pageRequestDidSucceed:(BOOL)a5 response:(id)a6 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)a7 error:(id)a8;

@end
