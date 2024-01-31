@class NSString, NSURL, _SWPersonIdentity;

@interface SWHighlightMentionEvent : NSObject <SWHighlightEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _SWPersonIdentity *mentionedPersonIdentity;
@property (readonly, nonatomic) NSString *mentionedPersonHandle;
@property (readonly, copy, nonatomic) NSURL *highlightURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHighlight:(id)a0 mentionedPersonCloudKitShareHandle:(id)a1;
- (id)initWithHighlight:(id)a0 mentionedPersonIdentity:(id)a1;
- (id)initWithHighlightURL:(id)a0 mentionedPersonHandle:(id)a1 mentionedPersonIdentity:(id)a2;

@end
