@class NSURL, NSString;

@interface SWHighlightPersistenceEvent : NSObject <SWHighlightEvent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long persistenceEventType;
@property (readonly, nonatomic) long long persistenceEventTrigger;
@property (readonly, copy, nonatomic) NSURL *highlightURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHighlight:(id)a0 trigger:(long long)a1;
- (id)initWithHighlight:(id)a0 type:(long long)a1;
- (id)initWithHighlightURL:(id)a0 type:(long long)a1;

@end
