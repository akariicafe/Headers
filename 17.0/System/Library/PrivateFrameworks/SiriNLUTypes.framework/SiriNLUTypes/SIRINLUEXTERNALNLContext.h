@class SIRINLUEXTERNALSystemDialogActGroup, NSMutableArray;

@interface SIRINLUEXTERNALNLContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSystemDialogActGroup;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup;
@property (retain, nonatomic) NSMutableArray *activeTasks;
@property (retain, nonatomic) NSMutableArray *executedTasks;
@property (retain, nonatomic) NSMutableArray *salientEntities;
@property (retain, nonatomic) NSMutableArray *systemDialogActs;

+ (Class)activeTasksType;
+ (Class)executedTasksType;
+ (Class)salientEntitiesType;
+ (Class)systemDialogActsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addActiveTasks:(id)a0;
- (id)activeTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)activeTasksCount;
- (void)addExecutedTasks:(id)a0;
- (void)addSalientEntities:(id)a0;
- (void)addSystemDialogActs:(id)a0;
- (void)clearActiveTasks;
- (void)clearExecutedTasks;
- (void)clearSalientEntities;
- (void)clearSystemDialogActs;
- (id)executedTasksAtIndex:(unsigned long long)a0;
- (unsigned long long)executedTasksCount;
- (id)salientEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)salientEntitiesCount;
- (id)systemDialogActsAtIndex:(unsigned long long)a0;
- (unsigned long long)systemDialogActsCount;

@end
