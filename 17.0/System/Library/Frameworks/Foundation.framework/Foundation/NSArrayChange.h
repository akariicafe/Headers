@interface NSArrayChange : NSObject

@property (readonly) unsigned long long changeType;
@property (readonly) unsigned long long sourceIndex;
@property (readonly) unsigned long long destinationIndex;
@property (readonly) id value;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithType:(unsigned long long)a0 sourceIndex:(unsigned long long)a1 destinationIndex:(unsigned long long)a2 value:(id)a3;

@end
