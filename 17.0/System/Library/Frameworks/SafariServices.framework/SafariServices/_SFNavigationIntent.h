@class NSUUID, NSString, NSURL, SFTabStateData, NSArray, WebBookmark, NSDictionary, SLHighlight, UIEventAttribution, _WKActivatedElementInfo;
@protocol WBSCloudTabItem;

@interface _SFNavigationIntent : NSObject {
    id _value;
}

@property (class, readonly, nonatomic) long long defaultTabOrder;

@property (nonatomic) long long policy;
@property (nonatomic) BOOL shouldRelateToSourceTab;
@property (nonatomic) BOOL neverPromptWhenOpeningMultipleIntents;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) id<WBSCloudTabItem> cloudTab;
@property (readonly, nonatomic) SFTabStateData *recentlyClosedTabStateData;
@property (retain, nonatomic) SLHighlight *highlight;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *navigationIntents;
@property (readonly, nonatomic) BOOL opensInNewTab;
@property (readonly, nonatomic) BOOL opensInNewWindow;
@property (readonly, nonatomic) BOOL canUseExistingBlankTab;
@property (readonly, nonatomic) BOOL shouldOrderToForeground;
@property (readonly, nonatomic) BOOL shouldPromptBeforeHandling;
@property (readonly, copy, nonatomic) NSDictionary *externalOptions;
@property (readonly, nonatomic) UIEventAttribution *eventAttribution;
@property (nonatomic) long long provenance;
@property (nonatomic) BOOL shouldDismissSidebarOnLoad;
@property (retain, nonatomic) NSUUID *sourceTabUUID;
@property (retain, nonatomic) NSUUID *sourceWindowUUID;
@property (retain, nonatomic) _WKActivatedElementInfo *sourceElementInfo;
@property (nonatomic) BOOL isChildIntent;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, nonatomic) BOOL externalURLSourceApplicationIsSpotlight;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithType:(unsigned long long)a0 value:(id)a1 policy:(long long)a2;

@end
