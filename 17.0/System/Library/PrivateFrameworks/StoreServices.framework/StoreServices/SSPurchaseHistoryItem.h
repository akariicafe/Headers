@class NSString, NSMutableDictionary;

@interface SSPurchaseHistoryItem : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_properties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (id)valueForProperty:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
