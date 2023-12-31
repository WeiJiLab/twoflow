#ifndef __LOSS_FUNC_H__
#define __LOSS_FUNC_H__

typedef enum LossFuncType {
    CROSS_ENTROPY
} LossFuncType;


typedef float (*LossFuncForword)(struct LossFunc *func);

typedef struct LossFuncOperations {
    LossFuncForword forword;
} LossFuncOperations;

typedef struct LossFunc {
    LossFuncOperations ops;
} LossFunc;

#endif /* __LOSS_FUNC_H__ */