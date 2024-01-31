@class NSString;

@interface _DOCNavigationButtonAXIdentifier : NSObject <DOCNavigationButtonAXIdentifier>

@property (class, readonly) NSString *backInHistory;
@property (class, readonly) NSString *forwardInHistory;
@property (class, readonly) NSString *historyMenuPrefix;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonPrefix;
+ (id)idBase;


@end
