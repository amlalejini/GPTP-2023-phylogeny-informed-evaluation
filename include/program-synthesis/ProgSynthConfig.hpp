#pragma once

#include "emp/config/config.hpp"

namespace psynth {

EMP_BUILD_CONFIG(ProgSynthConfig,
  GROUP(WORLD, "How should the world be setup?"),
  VALUE(SEED, int, 0, "Random number seed"),
  VALUE(POP_SIZE, size_t, 512, "Population size."),
  VALUE(MAX_GENS, size_t, 50000, "Maximum number of generations."),
  VALUE(MAX_EVALS, size_t, 2560000000, "Maximum number of trait evaluations."),
  VALUE(STOP_MODE, std::string, "generations", "How do we know when to stop? Options: generations\nevaluations"),

  GROUP(PSB_PROBLEM, "Problem-related settings"),
  VALUE(PROBLEM, std::string, "small-or-large", "Problem to solve"),
  VALUE(TESTING_SET_PATH, std::string, "testing.json", "Path to testing set (json)"),
  VALUE(TRAINING_SET_PATH, std::string, "training.json", "Path to training set (json)"),

  GROUP(EVALUATION, "How are organisms evaluated?"),
  VALUE(EVAL_MODE, std::string, "full", "Evaluation mode. Options:\nfull\ncohort\ndown-sample"),
  VALUE(EVAL_FIT_EST_MODE, std::string, "none", "Fitness function estimation method. Options:\nnone\nancestor\nrelative"),
  VALUE(EVAL_MAX_PHYLO_SEARCH_DEPTH, int, -1, "Maximum phylogeny search depth when estimating fitness."),

  GROUP(SGP_CPU, "SignalGP Virtual CPU"),
  VALUE(MAX_ACTIVE_THREAD_CNT, size_t, 8, "Maximum number of active threads that can run simultaneously on a SGP virtual CPU."),
  VALUE(MAX_THREAD_CAPACITY, size_t, 16, "Maximum thread capacity."),

  GROUP(SGP_PROGRAM, "SignalGP Program settings"),
  VALUE(PRG_MIN_FUNC_CNT, size_t, 0, "Minimum number of functions per program."),
  VALUE(PRG_MAX_FUNC_CNT, size_t, 64, "Maximum number of functions per program."),
  VALUE(PRG_MIN_FUNC_INST_CNT, size_t, 0, "Minimum number of instructions per function."),
  VALUE(PRG_MAX_FUNC_INST_CNT, size_t, 128, "Maximum number of instructions per function."),
  VALUE(PRG_INST_MIN_ARG_VAL, int, -4, "Minimum instruction-argment value"),
  VALUE(PRG_INST_MAX_ARG_VAL, int, 4, "Maximum instruction-argument value"),

  GROUP(SGP_MUTATION, "SignalGP mutation settings"),
  VALUE(MUT_RATE_INST_ARG_SUB, double, 0.005, "InstArgSub rate"),
  VALUE(MUT_RATE_INST_SUB, double, 0.005, "InstSub rate"),
  VALUE(MUT_RATE_INST_INS, double, 0.005, "InstIns rate"),
  VALUE(MUT_RATE_INST_DEL, double, 0.005, "InstDel rate"),
  VALUE(MUT_RATE_SEQ_SLIP, double, 0.05, "SeqSlip rate"),
  VALUE(MUT_RATE_FUNC_DUP, double, 0.05, "FuncDup rate"),
  VALUE(MUT_RATE_FUNC_DEL, double, 0.05, "FuncDel rate"),
  VALUE(MUT_RATE_INST_TAG_BF, double, 0.001, "InstArgTagBF rate"),
  VALUE(MUT_RATE_FUNC_TAG_BF, double, 0.001, "FuncTagBF rate"),
  VALUE(MUT_RATE_INST_TAG_SINGLE_BF, double, 0.0, "Per-tag single bit flip rate"),
  VALUE(MUT_RATE_FUNC_TAG_SINGLE_BF, double, 0.0, "Per-tag single bit flip rate"),
  VALUE(MUT_RATE_INST_TAG_SEQ_RAND, double, 0.0, "Per-tag sequence randomization rate"),
  VALUE(MUT_RATE_FUNC_TAG_SEQ_RAND, double, 0.0, "Per-tag sequence randomization rate"),

)

}