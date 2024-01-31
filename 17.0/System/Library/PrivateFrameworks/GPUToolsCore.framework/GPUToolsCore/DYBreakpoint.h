@class NSString, NSArray, NSPredicate, NSMutableData;

@interface DYBreakpoint : NSObject <NSSecureCoding> {
    NSString *_predicateString;
    NSMutableData *_fbufData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int fenum;
@property (retain, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSString *predicateString;
@property (nonatomic) BOOL breakBefore;
@property (nonatomic) BOOL breakAfter;
@property (nonatomic) BOOL noExec;
@property (readonly, nonatomic) struct Function { struct CoreFunction { unsigned int x0; unsigned int x1; unsigned short x2; unsigned short x3; union { unsigned long long x0; unsigned long long x1; } x4; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x5; struct Argument { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned short x4; unsigned short x5; } x6[16]; unsigned int x7; unsigned int x8; void *x9; void *x10; } x0; unsigned long long x1; unsigned long long x2; unsigned long long *x3; unsigned short x4; unsigned short x5; int x6; void *x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; struct Function *x12; void *x13; } *function;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int glError;
@property (readonly, retain, nonatomic) NSString *threadName;
@property (readonly, retain, nonatomic) NSArray *backtrace;

+ (id)keyPathsForValuesAffectingName;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)_commonInit:(int)a0 backtrace:(id)a1 error:(int)a2;
- (id)_initWithPbuf:(struct Fbuf { union { void *x0; struct *x1; } x0; void *x1; unsigned int x2; } *)a0 type:(int)a1 backtrace:(id)a2 error:(int)a3;
- (id)_initWithType:(int)a0 backtrace:(id)a1 error:(int)a2;

@end
