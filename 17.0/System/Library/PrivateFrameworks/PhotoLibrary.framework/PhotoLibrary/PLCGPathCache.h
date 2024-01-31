@interface PLCGPathCache : NSObject {
    struct __CFDictionary { } *_pathCache;
}

+ (id)sharedPathCache;

- (id)init;
- (void)dealloc;
- (void)setPath:(struct CGPath { } *)a0 forKey:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPath { } *)pathForKey:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
