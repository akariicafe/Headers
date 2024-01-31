@class NSString, NSSet;

@interface ATXScoreDict : NSObject <ATXScoreLogSerializable> {
    struct __CFDictionary { } *_dict;
    NSSet *_defaultKeys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long count;

+ (id)scoreDictFromDictionary:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithDefaultValueForKeys:(id)a0;
- (double)scoreForKey:(id)a0 found:(BOOL *)a1;
- (void).cxx_destruct;
- (void)getKeys:(id *)a0 count:(unsigned long long)a1;
- (void)setScore:(double)a0 forKey:(id)a1;
- (id)initWithDefaultValueForScoreTypeKeys;
- (id)toDictionary;
- (void)atx_writeToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;

@end
