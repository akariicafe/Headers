@class NSURL, NSString;

@interface _SWHighlightPersistenceEvent : SWHighlightPersistenceEvent <_SWHighlightEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *highlightURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithHighlight:(id)a0 type:(long long)a1;

@end
