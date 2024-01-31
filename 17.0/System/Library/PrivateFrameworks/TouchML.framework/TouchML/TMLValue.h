@class NSString;

@interface TMLValue : NSObject <TMLValue> {
    id _value;
    unsigned long long _valueType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
