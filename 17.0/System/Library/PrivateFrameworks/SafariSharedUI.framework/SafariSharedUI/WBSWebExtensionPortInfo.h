@class NSUUID, WKWebView, NSString;

@interface WBSWebExtensionPortInfo : NSObject

@property (retain, nonatomic) NSUUID *extensionID;
@property (retain, nonatomic) NSUUID *sourceID;
@property (weak, nonatomic) WKWebView *sourceWebView;
@property (retain, nonatomic) NSUUID *destinationID;
@property (weak, nonatomic) WKWebView *destinationWebView;
@property (copy, nonatomic) NSString *destinationApplicationID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithExtensionID:(id)a0 sourceID:(id)a1 sourceWebView:(id)a2 destinationApplicationID:(id)a3;
- (id)initWithExtensionID:(id)a0 sourceID:(id)a1 sourceWebView:(id)a2 destinationID:(id)a3 destinationWebView:(id)a4;

@end
