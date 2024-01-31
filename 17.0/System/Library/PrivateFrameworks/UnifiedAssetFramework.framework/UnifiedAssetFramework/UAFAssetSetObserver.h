@class NSString, NSSet, NSMutableSet, TRIClient, NSDate, NSMutableArray;
@protocol UAFAssetSetObserverDelegate;

@interface UAFAssetSetObserver : NSObject

@property (retain, nonatomic) NSString *assetSetName;
@property (retain, nonatomic) id<UAFAssetSetObserverDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) TRIClient *trial;
@property (retain, nonatomic) NSSet *namespaces;
@property (retain, nonatomic) NSDate *namespaceUpdateDate;
@property (retain, nonatomic) NSMutableSet *namespacesToIgnore;
@property (nonatomic) int notifyToken;
@property (nonatomic) int autoAssetNotifyToken;
@property (retain, nonatomic) NSMutableArray *namespaceTokens;

+ (int)listenForAutoAssetNotificationsForAssetSet:(id)a0 queue:(id)a1 updateHandler:(id /* block */)a2;
+ (BOOL)sendUAFNotificationForAssetSet:(id)a0;
+ (id)getConcurrentQueue;
+ (id)getSerialQueue;
+ (int)listenForUAFNotificationsForAssetSet:(id)a0 queue:(id)a1 updateHandler:(id /* block */)a2;
+ (id)notificationForAssetSet:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAssetSet:(id)a0 queue:(id)a1 updateHandler:(id /* block */)a2;
- (id)initWithAssetSet:(id)a0 configurationDirURLs:(id)a1 queue:(id)a2 delegate:(id)a3;
- (id)initWithAssetSet:(id)a0 configurationDirURLs:(id)a1 queue:(id)a2 updateHandler:(id /* block */)a3;
- (id)initWithAssetSet:(id)a0 configurationDirURLs:(id)a1 queue:(id)a2 updateHandler:(id /* block */)a3 delegate:(id)a4;
- (id)initWithAssetSet:(id)a0 queue:(id)a1 delegate:(id)a2;
- (BOOL)namespaceHasChanged:(id)a0;
- (void)resetNamespacesToIgnore:(id)a0;

@end
